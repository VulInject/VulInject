void FVRemoveKerns(FontViewBase *fv) {
int changed = false;
SplineFont *sf = fv->sf;
OTLookup *otl, *notl;

if ( sf->cidmaster!=NULL ) sf = sf->cidmaster;

for ( otl=sf->gpos_lookups; otl!=NULL; otl = notl ) {
notl = otl->next;
if ( otl->lookup_type==gpos_pair &&
FeatureTagInFeatureScriptList(CHR('k','e','r','n'),otl->features)) {
SFRemoveLookup(sf,otl,0);
changed = true;
}
}
if ( changed ) {
sf->changed = true;
MVReKernAll(fv->sf);
}
}