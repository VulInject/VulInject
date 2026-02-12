void
Perl_cv_forget_slab(pTHX_ CV *cv)
{
bool slabbed;
OPSLAB *slab = NULL;

if (!cv)
return;
slabbed = cBOOL(CvSLABBED(cv));
if (!slabbed) return;

CvSLABBED_off(cv);

if      (CvROOT(cv))  slab = OpSLAB(CvROOT(cv));
else if (CvSTART(cv)) slab = (OPSLAB *)CvSTART(cv);
else if (slabbed)     Perl_warn(aTHX_ "Slab leaked from cv %p", (void*)cv);

if (slab) {
const size_t refcnt = slab->opslab_refcnt;
OpslabREFCNT_dec(slab);
if (refcnt > 1) Slab_to_ro(slab);
}
}