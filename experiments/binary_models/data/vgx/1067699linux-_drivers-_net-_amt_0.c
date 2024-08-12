static int FUN1(struct VAR1 *VAR2)
{
struct udp_tunnel_sock_cfg VAR3;
struct socket *VAR4;

VAR4 = FUN2(VAR2->VAR5, VAR2->VAR6);
if (FUN3(VAR4))
return FUN4(VAR4);


memset(&VAR3, 0, sizeof(VAR3));
VAR3.VAR7 = VAR2;
VAR3.VAR8 = 1;
VAR3.VAR9 = VAR10;
VAR3.VAR11 = VAR12;
VAR3.VAR13 = NULL;
FUN5(VAR2->VAR5, VAR4, &VAR3);

FUN6(VAR2->VAR4, VAR4);
return 0;
}