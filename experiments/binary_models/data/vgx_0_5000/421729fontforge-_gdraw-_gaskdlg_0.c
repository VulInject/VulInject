void _GWidgetPostNotice8(const char *title,const char *statement,va_list ap, int timeout) {
GWindow gw;
char *ob[2];


if ( title==NULL ) {
if ( last!=NULL )
GDrawDestroyWindow(last);
return;
}

ob[0] = _("_OK");
ob[1]=NULL;
gw = DlgCreate8(title,statement,ap,(const char **) ob,0,0,NULL,false,NULL,false,true);
if ( gw!=NULL && timeout>0 ) 
GDrawRequestTimer(gw,timeout*1000,0,NULL);


last = gw;
last_title = title;
}