static void *FUN1(unsigned VAR1, gfp_t VAR2)
{
void *VAR3 = memalign(64, VAR1);
if (!VAR3)
return VAR3;

if (VAR2 & VAR4)
memset(VAR3, 0, VAR1);
return VAR3;
}