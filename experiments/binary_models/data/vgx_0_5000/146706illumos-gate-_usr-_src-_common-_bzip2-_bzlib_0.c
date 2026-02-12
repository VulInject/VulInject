int BZ_API(BZ2_bzCompressInit)
( bz_stream* strm,
int        blockSize100k,
int        verbosity,
int        workFactor )
{
Int32   n;
EState* s;

if (!bz_config_ok()) return BZ_CONFIG_ERROR;

if (strm == NULL ||
blockSize100k < 1 || blockSize100k > 9 ||
workFactor < 0 || workFactor > 250)
return BZ_PARAM_ERROR;

if (workFactor == 0) workFactor = 30;
if (strm->bzalloc == NULL) strm->bzalloc = default_bzalloc;
if (strm->bzfree == NULL) strm->bzfree = default_bzfree;

s = BZALLOC( sizeof(EState) );
if (s == NULL) return BZ_MEM_ERROR;
s->strm = strm;

s->arr1 = NULL;
s->arr2 = NULL;
s->ftab = NULL;

n       = 100000 * blockSize100k;
s->arr1 = BZALLOC( n                  * sizeof(UInt32) );
s->arr2 = BZALLOC( (n+BZ_N_OVERSHOOT) * sizeof(UInt32) );
s->ftab = BZALLOC( 65537              * sizeof(UInt32) );

if (s->arr1 == NULL || s->arr2 == NULL || s->ftab == NULL) {
if (s->arr1 != NULL) BZFREE(s->arr1);
if (s->arr2 != NULL) BZFREE(s->arr2);
if (s->ftab != NULL) BZFREE(s->ftab);
if (s       != NULL) BZFREE(s);
return BZ_MEM_ERROR;
}

s->blockNo           = 0;
s->state             = BZ_S_INPUT;
s->mode              = BZ_M_RUNNING;
s->combinedCRC       = 0;
s->blockSize100k     = blockSize100k;
s->nblockMAX         = 100000 * blockSize100k - 19;
s->verbosity         = verbosity;
s->workFactor        = workFactor;

s->block             = (UChar*)s->arr2;
s->mtfv              = (UInt16*)s->arr1;
s->zbits             = NULL;
s->ptr               = (UInt32*)s->arr1;

strm->state          = s;
strm->total_in_lo32  = 0;
strm->total_in_hi32  = 0;
strm->total_out_lo32 = 0;
strm->total_out_hi32 = 0;
init_RL ( s );
prepare_new_block ( s );
return BZ_OK;
}