static BOOL CALLBACK emutls_init(PINIT_ONCE p0, PVOID p1, PVOID *p2) {
(void)p0;
(void)p1;
(void)p2;
emutls_mutex =
(LPCRITICAL_SECTION)_aligned_malloc(sizeof(CRITICAL_SECTION), 16);
if (!emutls_mutex) {
win_error(GetLastError(), "_aligned_malloc");
return FALSE;
}
InitializeCriticalSection(emutls_mutex);

emutls_tls_index = TlsAlloc();
if (emutls_tls_index == TLS_OUT_OF_INDEXES) {
emutls_exit();
win_error(GetLastError(), "TlsAlloc");
return FALSE;
}
atexit(&emutls_exit);
return TRUE;
}