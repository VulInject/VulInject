LIBXSMM_API void LIBXSMM_FSYMBOL(libxsmm_xclear)(void* dst, const int* size)
{
static int error_once = 0;
if (NULL != dst && NULL != size && 0 <= *size && 128 > *size)
{ const int s = *size;
LIBXSMM_MEMSET127(dst, 0, s);
}
else if (1 == LIBXSMM_ATOMIC_ADD_FETCH(&error_once, 1, LIBXSMM_ATOMIC_RELAXED)) {
LIBXSMM_INIT
if (0 != libxsmm_verbosity) { 
fprintf(stderr, "LIBXSMM ERROR: invalid arguments for libxsmm_xclear specified!\n");
}
}
}