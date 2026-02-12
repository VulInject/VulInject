void nad_set_attr(nad_t nad, unsigned int elem, int ns, const char *name, const char *val, int vallen)
{
int attr;

_nad_ptr_check(__func__, nad);


if((attr = nad_find_attr(nad, elem, ns, name, NULL)) < 0)
{

if(val != NULL)
_nad_attr(nad, elem, ns, name, val, vallen);
return;
}


if(val == NULL)
{
nad->attrs[attr].lval = nad->attrs[attr].lname = 0;
}else{
if(vallen > 0)
nad->attrs[attr].lval = vallen;
else
nad->attrs[attr].lval = strlen(val);
nad->attrs[attr].ival = _nad_cdata(nad,val,nad->attrs[attr].lval);
}

}