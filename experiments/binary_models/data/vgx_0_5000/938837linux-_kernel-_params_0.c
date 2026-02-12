STANDARD_PARAM_DEF(long,	long,			"%li",		kstrtol);
STANDARD_PARAM_DEF(ulong,	unsigned long,		"%lu",		kstrtoul);
STANDARD_PARAM_DEF(ullong,	unsigned long long,	"%llu",		kstrtoull);
STANDARD_PARAM_DEF(hexint,	unsigned int,		"%#08x", 	kstrtouint);

int param_set_uint_minmax(const char *val, const struct kernel_param *kp,
unsigned int min, unsigned int max)
{
unsigned int num;
int ret;

if (!val)
return -EINVAL;
ret = kstrtouint(val, 0, &num);
if (ret)
return ret;
if (num < min || num > max)
return -EINVAL;
*((unsigned int *)kp->arg) = num;
return 0;
}