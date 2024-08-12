int FUN1(struct VAR1 *VAR2,
struct VAR3 *VAR4,
enum ip_conntrack_info VAR5,
unsigned int VAR6,
unsigned int VAR7)
{
struct {
struct icmp6hdr	VAR8;
struct ipv6hdr	VAR9;
} *VAR10;
enum ip_conntrack_dir VAR11 = FUN2(VAR5);
enum nf_nat_manip_type VAR12 = FUN3(VAR6);
struct nf_conntrack_tuple VAR13;
unsigned long VAR14;

FUN4(VAR5 != VAR15 && VAR5 != VAR16);

if (FUN5(VAR2, VAR7 + sizeof(*VAR10)))
return 0;
if (FUN6(VAR2, VAR6, VAR7, VAR17))
return 0;

VAR10 = (void *)VAR2->VAR18 + VAR7;
if (VAR10->VAR8.VAR19 == VAR20) {
if ((VAR4->VAR21 & VAR22) != VAR22)
return 0;
if (VAR4->VAR21 & VAR23)
return 0;
}

if (VAR12 == VAR24)
VAR14 = VAR25;
else
VAR14 = VAR26;


if (VAR11 == VAR27)
VAR14 ^= VAR23;

if (!(VAR4->VAR21 & VAR14))
return 1;

if (!FUN7(VAR2, VAR7 + sizeof(VAR10->VAR8),
&VAR4->VAR28[!VAR11].VAR29, !VAR12))
return 0;

if (VAR2->VAR30 != VAR31) {
struct VAR32 *VAR33 = FUN8(VAR2);

VAR10 = (void *)VAR2->VAR18 + VAR7;
VAR10->VAR8.VAR34 = 0;
VAR10->VAR8.VAR34 =
FUN9(&VAR33->VAR35, &VAR33->VAR36,
VAR2->VAR37 - VAR7, VAR17,
FUN10(VAR2, VAR7,
VAR2->VAR37 - VAR7, 0));
}

FUN11(&VAR13, &VAR4->VAR28[!VAR11].VAR29);
VAR13.VAR38.VAR39 = VAR17;
if (!FUN7(VAR2, 0, &VAR13, VAR12))
return 0;

return 1;
}