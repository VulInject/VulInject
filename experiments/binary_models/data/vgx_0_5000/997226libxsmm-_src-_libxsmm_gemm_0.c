LIBXSMM_API_INTERN libxsmm_gemm_prefetch_type libxsmm_gemm_uid2prefetch(int uid)
{
switch (uid) {
case 1: return LIBXSMM_GEMM_PREFETCH_NONE;               
case 2: return LIBXSMM_GEMM_PREFETCH_SIGONLY;            
case 3: return LIBXSMM_GEMM_PREFETCH_BL2_VIA_C;          
case 4: return LIBXSMM_GEMM_PREFETCH_AL2_AHEAD;          
case 5: return LIBXSMM_GEMM_PREFETCH_AL2BL2_VIA_C_AHEAD; 
case 6: return LIBXSMM_GEMM_PREFETCH_AL2;                
case 7: return LIBXSMM_GEMM_PREFETCH_AL2BL2_VIA_C;       
case 8: return LIBXSMM_GEMM_PREFETCH_BRGEMM_OOB;
default: {
if (0 != libxsmm_verbosity) { 
static int error_once = 0;
if (1 == LIBXSMM_ATOMIC_ADD_FETCH(&error_once, 1, LIBXSMM_ATOMIC_RELAXED)) {
fprintf(stderr, "LIBXSMM WARNING: invalid prefetch strategy requested!\n");
}
}
return LIBXSMM_GEMM_PREFETCH_NONE;
}
}
}