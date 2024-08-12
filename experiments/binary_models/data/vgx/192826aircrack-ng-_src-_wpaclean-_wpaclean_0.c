static inline struct VAR1 * FUN1(const unsigned char * VAR2)
{
struct VAR1 * VAR3;

VAR3 = FUN2(VAR2);
if (VAR3) return (VAR3);

return (FUN3(VAR2));
}