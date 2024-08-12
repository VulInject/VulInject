static enum VAR1
FUN1(struct VAR2 *VAR3, struct VAR2 *VAR4,
ev_ssize_t VAR5, enum bufferevent_flush_mode VAR6, void *VAR7)
{
struct evbuffer_iovec VAR8[1];
struct evbuffer_iovec VAR9[1];
int VAR10, VAR11;
int VAR12, VAR13;

z_streamp VAR14 = VAR7;

do {

VAR13 = FUN2(VAR3, -1, NULL, VAR8, 1);
if (VAR13) {
VAR14->VAR15 = VAR8[0].VAR16;
VAR14->VAR17 = (unsigned char *)VAR8[0].VAR18;
} else {
VAR14->VAR15 = 0;
VAR14->VAR17 = 0;
}

FUN3(VAR4, 4096, VAR9, 1);
VAR14->VAR19 = (unsigned char *)VAR9[0].VAR18;
VAR14->VAR20 = VAR9[0].VAR16;


VAR12 = FUN4(VAR14, FUN5(VAR6));


VAR10 = VAR8[0].VAR16 - VAR14->VAR15;
VAR11 = VAR9[0].VAR16 - VAR14->VAR20;

FUN6(VAR3, VAR10);
VAR9[0].VAR16 = VAR11;
FUN7(VAR4, VAR9, 1);

if (VAR12==VAR21) {

if (VAR11 == 0)
return VAR22;
} else {
assert(VAR12 == VAR23 || VAR12 == VAR24);
}

} while (FUN8(VAR3) > 0);

++VAR25;

return (VAR26);
}