static int r_mark_regions(struct SN_env * z) {
z->I[1] = z->l;
z->I[0] = z->l;
{   int c1 = z->c;
{   
int ret = out_grouping_U(z, g_v, 97, 252, 1);
if (ret < 0) goto lab0;
z->c += ret;
}
{   
int ret = in_grouping_U(z, g_v, 97, 252, 1);
if (ret < 0) goto lab0;
z->c += ret;
}
z->I[1] = z->c;
{   
int ret = out_grouping_U(z, g_v, 97, 252, 1);
if (ret < 0) goto lab0;
z->c += ret;
}
{   
int ret = in_grouping_U(z, g_v, 97, 252, 1);
if (ret < 0) goto lab0;
z->c += ret;
}
z->I[0] = z->c;
lab0:
z->c = c1;
}
return 1;
}