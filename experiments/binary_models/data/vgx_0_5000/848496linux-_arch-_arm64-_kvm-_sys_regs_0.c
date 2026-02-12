static bool access_gic_sgi(struct kvm_vcpu *vcpu,
struct sys_reg_params *p,
const struct sys_reg_desc *r)
{
bool g1;

if (!p->is_write)
return read_from_write_only(vcpu, p, r);


if (p->Op0 == 0) {		
switch (p->Op1) {
default:		
case 0:			
g1 = true;
break;
case 1:			
case 2:			
g1 = false;
break;
}
} else {			
switch (p->Op2) {
default:		
case 5:			
g1 = true;
break;
case 6:			
case 7:			
g1 = false;
break;
}
}

vgic_v3_dispatch_sgi(vcpu, p->regval, g1);

return true;
}