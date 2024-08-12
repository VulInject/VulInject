FUN1 (VAR1 *VAR2, VAR3 *VAR4)
{
struct VAR5 *VAR6;
bfd_size_type VAR7 = sizeof (*VAR6);

VAR6 = FUN2 (VAR2, VAR7);
if (VAR6 == NULL)
return VAR8;
VAR4->VAR9 = VAR6;

return FUN3 (VAR2, VAR4);
}





struct VAR10
{
struct VAR10 *VAR11;


VAR3 *VAR4;


bfd_size_type VAR12;


bfd_size_type VAR13;
};


struct VAR14
{
struct VAR14 *VAR11;


bfd_vma VAR15;


VAR1 *VAR16;


char VAR17;


union
{
bfd_signed_vma VAR18;
bfd_vma VAR19;
} VAR20;
};


struct VAR21
{
struct VAR21 *VAR11;

bfd_vma VAR15;

union
{
bfd_signed_vma VAR18;
bfd_vma VAR19;
} VAR22;
};



((VAR23) != VAR24			\
&& (VAR23) != VAR25			\
&& (VAR23) != VAR26)







enum VAR27 {
VAR28,
VAR29,
VAR30,
VAR31,
VAR32,
VAR33
};

struct VAR34 {


struct bfd_hash_entry VAR35;

enum ppc_stub_type VAR36;


VAR3 *VAR37;


bfd_vma VAR38;


bfd_vma VAR39;
VAR3 *VAR40;


struct VAR41 *VAR42;


bfd_vma VAR15;


VAR3 *VAR43;
};

struct VAR44 {


struct bfd_hash_entry VAR35;


unsigned int VAR19;


unsigned int VAR45;
};

struct VAR41
{
struct elf_link_hash_entry VAR46;


struct VAR34 *VAR47;


struct VAR10 *VAR48;


struct VAR49 *VAR50;


unsigned int VAR51:1;
unsigned int VAR52:1;
unsigned int VAR53:1;


unsigned int VAR54:1;


char VAR55;
};



struct VAR56
{
struct elf_link_hash_table VAR46;


struct bfd_hash_table VAR57;


struct bfd_hash_table VAR58;


VAR1 *VAR59;


VAR3 * (*VAR60) (const char *, VAR3 *);
void (*VAR61) (void);


struct VAR62 {

VAR3 *VAR63;

VAR3 *VAR37;

bfd_vma VAR64;
} *VAR65;


unsigned int VAR66;
unsigned int VAR67;


bfd_vma VAR68;


int VAR69;


int VAR70;


VAR3 **VAR71;


VAR3 *VAR20;
VAR3 *VAR22;
VAR3 *VAR72;
VAR3 *VAR73;
VAR3 *VAR74;
VAR3 *VAR75;
VAR3 *VAR76;
VAR3 *VAR77;
VAR3 *VAR78;


struct VAR49 *VAR79;


unsigned long VAR80[VAR33];


unsigned int VAR81;


unsigned int VAR82;


unsigned int VAR83;


unsigned int VAR84;


unsigned int VAR85;


struct sym_sec_cache VAR86;
};