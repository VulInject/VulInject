static bool FUN1(void)
{
struct versal_sip_payload VAR1 = { };

FUN2(VAR2, 0, 0, 0, 0, &VAR1);

if (VAR1.VAR3[0] == VAR4 && VAR1.VAR3[2] == VAR5 &&
VAR1.VAR3[4] == VAR6 && VAR1.VAR3[6] == VAR7)
return true;

return false;
}