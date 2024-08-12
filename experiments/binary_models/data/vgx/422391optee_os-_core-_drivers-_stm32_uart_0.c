static int FUN1(struct VAR1 *VAR2)
{
vaddr_t VAR3 = FUN2(VAR2);

while (!FUN3(VAR2))
;

return FUN4(VAR3 + VAR4) & 0xff;
}

static const struct serial_ops VAR5 = {
.VAR6 = VAR7,
.VAR8 = VAR9,
.VAR10 = VAR11,
.getchar = VAR12,

};