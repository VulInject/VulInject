static int Goto_OK(GGadget *g, GEvent *e) {
GWindow gw;
GotoData *d;
char *ret;
int i;

if ( e->type==et_controlevent && e->u.control.subtype == et_buttonactivate ) {
gw = GGadgetGetWindow(g);
d = GDrawGetUserData(gw);
ret = GGadgetGetTitle8(GWidgetGetControl(gw,CID_Name));
d->ret = NameToEncoding(d->sf,d->map,ret);
if ( d->ret<0 || (d->ret>=d->map->enccount && d->sf->cidmaster==NULL ))
d->ret = -1;
if ( d->ret==-1 && d->ranges!=NULL ) {
for ( i=0; d->ranges[i].text!=NULL; ++i ) {
if ( strcmp(ret,(char *) d->ranges[i].text)==0 ) {
d->ret = (intptr_t) d->ranges[i].userdata;
break;
}
}
}
if ( d->ret==-1 ) {
ff_post_notice(_("Goto"),_("Could not find the glyph: %.70s"),ret);
} else
d->done = true;
free(ret);
}
return( true );
}