int BZ_API(BZ2_bzDecompressEnd)  ( bz_stream *strm )
{
DState* s;
if (strm == NULL) return BZ_PARAM_ERROR;
s = (DState*) strm->state;
if (s == NULL) return BZ_PARAM_ERROR;
if (s->strm != strm) return BZ_PARAM_ERROR;

if (s->tt   != NULL) BZFREE(s->tt);
if (s->ll16 != NULL) BZFREE(s->ll16);
if (s->ll4  != NULL) BZFREE(s->ll4);

BZFREE(strm->state);
strm->state = NULL;

return BZ_OK;
}






{                                         \
if (bzerror != NULL) *bzerror = eee;   \
if (bzf != NULL) bzf->lastErr = eee;   \
}

typedef
struct {
FILE*     handle;
Char      buf[BZ_MAX_UNUSED];
Int32     bufN;
Bool      writing;
bz_stream strm;
Int32     lastErr;
Bool      initialisedOk;
}
bzFile;



static Bool myfeof ( FILE* f )
{
Int32 c = fgetc ( f );
if (c == EOF) return True;
ungetc ( c, f );
return False;
}