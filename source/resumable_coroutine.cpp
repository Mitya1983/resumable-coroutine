#include "resumable_coroutine.hpp"

mt::ResumableCoroutine::ResumableCoroutine(const coroutine_handle handle) :
        m_handle(handle) {

}

mt::ResumableCoroutine::~ResumableCoroutine() = default;

bool mt::ResumableCoroutine::resume() {
    if (not m_handle.done()){
        m_handle.resume();
    }
    return not m_handle.done();
}

mt::ResumableCoroutine::ResumableCoroutine(const mt::ResumableCoroutine& other) = default;

mt::ResumableCoroutine::ResumableCoroutine(mt::ResumableCoroutine&& other)  noexcept = default;

mt::ResumableCoroutine& mt::ResumableCoroutine::operator=(const mt::ResumableCoroutine& other) = default;

mt::ResumableCoroutine& mt::ResumableCoroutine::operator=(mt::ResumableCoroutine&& other) noexcept = default;
