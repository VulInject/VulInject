int rpmdsRpmlibPool(rpmstrPool pool, rpmds * dsp, const void * tblp)
{
const struct rpmlibProvides_s * rltblp = tblp;
const struct rpmlibProvides_s * rlp;
int rc = 0;

if (rltblp == NULL)
rltblp = rpmlibProvides;

for (rlp = rltblp; rlp->featureName != NULL && rc >= 0; rlp++) {
rpmds ds = rpmdsSinglePool(pool, RPMTAG_PROVIDENAME, rlp->featureName,
rlp->featureEVR, rlp->featureFlags);
rc = rpmdsMerge(dsp, ds);
rpmdsFree(ds);
}

if (*dsp && (*dsp)->pool != pool)
rpmstrPoolFreeze((*dsp)->pool, 0);
return (rc < 0) ? -1 : 0;
}