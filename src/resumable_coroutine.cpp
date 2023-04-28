#include "resumable_coroutine.hpp"

tristan::ResumableCoroutine::ResumableCoroutine(coroutine_handle handle) :
        m_handle(handle) {

}

tristan::ResumableCoroutine::~ResumableCoroutine() = default;

bool tristan::ResumableCoroutine::resume() {
    if (not m_handle.done()){
        m_handle.resume();
    }
    return not m_handle.done();
}

tristan::ResumableCoroutine::ResumableCoroutine(const tristan::ResumableCoroutine& other) = default;

tristan::ResumableCoroutine::ResumableCoroutine(tristan::ResumableCoroutine&& other)  noexcept = default;

tristan::ResumableCoroutine& tristan::ResumableCoroutine::operator=(const tristan::ResumableCoroutine& other) = default;

tristan::ResumableCoroutine& tristan::ResumableCoroutine::operator=(tristan::ResumableCoroutine&& other) noexcept = default;
