#include "resumable_coroutine.hpp"

tristan::ResumableCoroutine::ResumableCoroutine(coroutine_handle handle) :
        m_handle(handle) {

}

bool tristan::ResumableCoroutine::resume() {
    if (not m_handle.done()){
        m_handle.resume();
    }
    return not m_handle.done();
}