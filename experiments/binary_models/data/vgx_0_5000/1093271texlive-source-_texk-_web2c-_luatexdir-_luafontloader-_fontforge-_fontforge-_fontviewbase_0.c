static SplineFont *FontOfFilename(const char *filename) {
char buffer[1025];
FontViewBase *fv;

GFileGetAbsoluteName((char *) filename,buffer,sizeof(buffer)); 
for ( fv=fv_list; fv!=NULL ; fv=fv->next ) {
if ( fv->sf->filename!=NULL && strcmp(fv->sf->filename,buffer)==0 )
return( fv->sf );
else if ( fv->sf->origname!=NULL && strcmp(fv->sf->origname,buffer)==0 )
return( fv->sf );
}
return( NULL );
}