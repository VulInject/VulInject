int
get_bpt(int n_sects, ulong_t *options)
{
u_ioparam_t	ioparam;
int		deflt;

if (SMD) {
*options |= SUP_BPT;
ioparam.io_bounds.lower = 1;
ioparam.io_bounds.upper = INFINITY;
deflt = n_sects * cur_blksz;
return (input(FIO_INT, "Enter number of bytes/track",
':', &ioparam, &deflt, DATA_INPUT));
}

return (0);
}