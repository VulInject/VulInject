static VAR1 FUN1(const void *VAR2,
void *VAR3, uint16_t VAR4)
{
const struct VAR5* VAR6 = VAR2;
uint16_t VAR7;

VAR7 = sizeof(VAR6->VAR8->VAR9);
if (VAR7 > VAR4)
return 0;

memcpy(VAR3, &VAR6->VAR8->VAR9, VAR7);
return VAR7;
}

static const struct fscache_cookie_def VAR10 = {
.VAR11		= "",
.VAR12		= VAR13,
.VAR14	= VAR15,
};