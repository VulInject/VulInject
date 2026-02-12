errcode_t KRB5_CALLCONV
profile_get_integer(profile_t profile, const char *name, const char *subname,
const char *subsubname, int def_val, int *ret_int)
{
char            *value;
errcode_t       retval;
const char      *names[4];

*ret_int = def_val;
if (profile == 0)
return 0;

names[0] = name;
names[1] = subname;
names[2] = subsubname;
names[3] = 0;
retval = profile_get_value(profile, names, &value);
if (retval == PROF_NO_SECTION || retval == PROF_NO_RELATION) {
*ret_int = def_val;
return 0;
} else if (retval)
return retval;

retval = parse_int(value, ret_int);
free(value);
return retval;
}