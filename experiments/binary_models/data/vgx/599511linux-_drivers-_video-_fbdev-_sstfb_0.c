static int FUN1(u_int VAR1, u_int VAR2, u_int VAR3, u_int VAR4,
u_int VAR5, struct VAR6 *VAR7)
{
struct VAR8 *VAR9 = VAR7->VAR9;
u32 VAR10;

FUN2("");
FUN2("",
VAR1, VAR2, VAR3, VAR4, VAR5);
if (VAR1 > 15)
return 0;

VAR2    >>= (16 - VAR7->VAR11.VAR2.VAR12);
VAR3  >>= (16 - VAR7->VAR11.VAR3.VAR12);
VAR4   >>= (16 - VAR7->VAR11.VAR4.VAR12);
VAR5 >>= (16 - VAR7->VAR11.VAR5.VAR12);
VAR10 = (VAR2 << VAR7->VAR11.VAR2.VAR13)
| (VAR3 << VAR7->VAR11.VAR3.VAR13)
| (VAR4  << VAR7->VAR11.VAR4.VAR13)
| (VAR5 << VAR7->VAR11.VAR5.VAR13);

VAR9->VAR14[VAR1] = VAR10;

return 0;
}