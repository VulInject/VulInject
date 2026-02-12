int
TIFFUnsetField(TIFF* tif, uint32 tag)
{
const TIFFField *fip =  TIFFFieldWithTag(tif, tag);
TIFFDirectory* td = &tif->tif_dir;

if( !fip )
return 0;

if( fip->field_bit != FIELD_CUSTOM )
TIFFClrFieldBit(tif, fip->field_bit);
else
{
TIFFTagValue *tv = NULL;
int i;

for (i = 0; i < td->td_customValueCount; i++) {

tv = td->td_customValues + i;
if( tv->info->field_tag == tag )
break;
}

if( i < td->td_customValueCount )
{
_TIFFfree(tv->value);
for( ; i < td->td_customValueCount-1; i++) {
td->td_customValues[i] = td->td_customValues[i+1];
}
td->td_customValueCount--;
}
}

tif->tif_flags |= TIFF_DIRTYDIRECT;

return (1);
}