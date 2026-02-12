fetch_elfcore_registers (char *core_reg_sect, unsigned core_reg_size,
int which, CORE_ADDR ignore)
{
switch (which)
{
case 0:  
if (core_reg_size != SIZEOF_STRUCT_REG)
warning ("Wrong size register set in core file.");
else
shnbsd_supply_reg (core_reg_sect, -1);
break;

default:

break;
}
}

static struct core_fns shnbsd_core_fns =
{
bfd_target_unknown_flavour,		
default_check_format,			
default_core_sniffer,			
fetch_core_registers,			
NULL					
};