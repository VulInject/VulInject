static void tdx_parse_tdinfo(u64 *cc_mask)
{
struct tdx_module_output out;
unsigned int gpa_width;
u64 td_attr;


tdx_module_call(TDX_GET_INFO, 0, 0, 0, 0, &out);


gpa_width = out.rcx & GENMASK(5, 0);
*cc_mask = BIT_ULL(gpa_width - 1);


td_attr = out.rdx;
if (!(td_attr & ATTR_SEPT_VE_DISABLE)) {
const char *msg = "TD misconfiguration: SEPT_VE_DISABLE attribute must be set.";


if (td_attr & ATTR_DEBUG)
pr_warn("%s\n", msg);
else
tdx_panic(msg);
}
}