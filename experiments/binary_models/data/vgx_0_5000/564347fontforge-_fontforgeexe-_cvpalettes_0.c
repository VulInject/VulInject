void CVLSelectLayer(CharView *cv, int layer) {
if ( layer<-1 || layer>=cv->b.sc->layer_cnt )
return;

if ( layer==-1 ) {
cv->b.drawmode = dm_grid;
cv->lastselpt = NULL;
} else {
if ( layer==1 ) {
cv->b.drawmode = dm_fore;
cv->lastselpt = NULL;
} else {
cv->b.drawmode = dm_back;
cv->b.layerheads[dm_back] = &cv->b.sc->layers[layer];
cv->lastselpt = NULL;
}

CVDebugFree(cv->dv);
SplinePointListsFree(cv->b.gridfit); cv->b.gridfit = NULL;
FreeType_FreeRaster(cv->oldraster); cv->oldraster = NULL;
FreeType_FreeRaster(cv->raster); cv->raster = NULL;
cv->show_ft_results = false;
}
layerinfo.active = CVLayer(&cv->b); 

CVRegenFill(cv);
GDrawRequestExpose(cv->v,NULL,false);
if (cvlayers2) GDrawRequestExpose(cvlayers2,NULL,false);
if (cvlayers)  GDrawRequestExpose(cvlayers,NULL,false);
GDrawRequestExpose(cv->gw,NULL,false);
}