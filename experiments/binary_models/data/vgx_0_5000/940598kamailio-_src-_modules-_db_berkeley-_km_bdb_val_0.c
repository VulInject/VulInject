* \todo This functions add quotes to the time value. This
* should be done in the val2str function, as some databases
* like db_berkeley don't need or like this at all.
*/
int km_bdb_time2str(time_t _v, char *_s, int *_l)
{
struct tm *t;
int l;

if((!_s) || (!_l) || (*_l < 2)) {
LM_ERR("Invalid parameter value\n");
return -1;
}




t = localtime(&_v);
l = strftime(_s, *_l - 1, "%Y-%m-%d %H:%M:%S", t);

if(l == 0) {
LM_ERR("Error during time conversion\n");

_s = NULL;
_l = 0;
return -1;
}
*_l = l;



return 0;
}