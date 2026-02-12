LIBXSMM_API void LIBXSMM_FSYMBOL(libxsmm_aligned)(int* , const void* , const int* , int* );
LIBXSMM_API void LIBXSMM_FSYMBOL(libxsmm_aligned)(int* result, const void* ptr, const int* inc, int* alignment)
{
static int error_once = 0;
if (NULL != result)
{
const size_t next = (NULL != inc ? *inc : 0);
*result = libxsmm_aligned(ptr, &next, alignment);
}
else if (1 == LIBXSMM_ATOMIC_ADD_FETCH(&error_once, 1, LIBXSMM_ATOMIC_RELAXED)) {
LIBXSMM_INIT
if (0 != libxsmm_verbosity) { 
fprintf(stderr, "LIBXSMM ERROR: invalid arguments for libxsmm_aligned specified!\n");
}
}
}