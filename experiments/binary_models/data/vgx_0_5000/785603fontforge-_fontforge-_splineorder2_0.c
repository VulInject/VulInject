void SFConvertLayerToOrder2(SplineFont *_sf,int layer) {
int i, k;
SplineFont *sf;

if ( _sf->cidmaster!=NULL ) _sf=_sf->cidmaster;
k = 0;
do {
sf = _sf->subfonts==NULL ? _sf : _sf->subfonts[k];
for ( i=0; i<sf->glyphcnt; ++i ) if ( sf->glyphs[i]!=NULL ) {
SCConvertLayerToOrder2(sf->glyphs[i],layer);
sf->glyphs[i]->ticked = false;
sf->glyphs[i]->changedsincelasthinted = false;
}
for ( i=0; i<sf->glyphcnt; ++i ) if ( sf->glyphs[i]!=NULL && !sf->glyphs[i]->ticked )
SCConvertRefs(sf->glyphs[i],layer);

if ( layer!=ly_back )
for ( i=0; i<sf->glyphcnt; ++i ) if ( sf->glyphs[i]!=NULL )
SCNumberPoints(sf->glyphs[i],layer);
++k;
} while ( k<_sf->subfontcnt );
_sf->layers[layer].order2 = true;
}