int msINLINELayerGetShape(layerObj *layer, shapeObj *shape, resultObj *record)
{
int i=0;
featureListNodeObjPtr current;

int shapeindex = record->shapeindex; 

current = layer->features;
while (current!=NULL && i!=shapeindex) {
i++;
current = current->next;
}
if (current == NULL) {
msSetError(MS_SHPERR, "No inline feature with this index.", "msINLINELayerGetShape()");
return MS_FAILURE;
}

if (msCopyShape(&(current->shape), shape) != MS_SUCCESS) {
msSetError(MS_SHPERR, "Cannot retrieve inline shape. There some problem with the shape", "msINLINELayerGetShape()");
return MS_FAILURE;
}

if (layer->numitems > shape->numvalues) {
shape->values = (char **)msSmallRealloc(shape->values, sizeof(char *)*(layer->numitems));
for (i = shape->numvalues; i < layer->numitems; i++)
shape->values[i] = msStrdup("");
}
msComputeBounds(shape);
return MS_SUCCESS;
}