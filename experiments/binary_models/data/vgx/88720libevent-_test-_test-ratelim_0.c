static void
FUN1(evutil_socket_t VAR1, short VAR2, void *VAR3)
{
struct VAR4 *VAR5 = VAR3;

ev_ssize_t VAR6 = FUN2(VAR5);
ev_ssize_t VAR7 = FUN3(VAR5);
ev_ssize_t VAR8 = FUN4(VAR5);
ev_ssize_t VAR9 = FUN5(VAR5);

VAR10 += VAR6;
VAR11 += VAR7;
VAR12 += VAR8;
VAR13 += VAR9;
if ((VAR14) > VAR15)		\
VAR15 = (VAR14);		\
if ((VAR14) < VAR16)		\
VAR16 = (VAR14)
FUN6(VAR6);
FUN6(VAR7);

VAR17++;
if (VAR17 >= .8 * ((double)VAR18 / VAR19) * VAR20) {
FUN7(FUN8(FUN9(VAR5)));
}
}