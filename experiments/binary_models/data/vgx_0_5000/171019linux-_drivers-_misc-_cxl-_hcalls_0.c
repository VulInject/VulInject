static long cxl_h_control_facility(u64 unit_address, u64 op,
u64 p1, u64 p2, u64 p3, u64 p4, u64 *out)
{
unsigned long retbuf[PLPAR_HCALL9_BUFSIZE];
long rc;

CXL_H9_WAIT_UNTIL_DONE(rc, retbuf, H_CONTROL_CA_FACILITY, unit_address, op, p1, p2, p3, p4);
_PRINT_MSG(rc, "cxl_h_control_facility(%#.16llx, %s(%#llx, %#llx, %#llx, %#llx, R4: %#lx)): %li\n",
unit_address, OP_STR_CONTROL_ADAPTER(op), p1, p2, p3, p4, retbuf[0], rc);
trace_cxl_hcall_control_facility(unit_address, OP_STR_CONTROL_ADAPTER(op), p1, p2, p3, p4, retbuf[0], rc);

switch (rc) {
case H_SUCCESS:       
if (op == H_CONTROL_CA_FACILITY_COLLECT_VPD)
*out = retbuf[0];
return 0;
case H_PARAMETER:     
case H_FUNCTION:      
case H_NOT_FOUND:     
case H_NOT_AVAILABLE: 
case H_SG_LIST:       
return -EINVAL;
case H_AUTHORITY:     
case H_RESOURCE:      
case H_HARDWARE:      
case H_STATE:         
case H_BUSY:
return -EBUSY;
default:
WARN(1, "Unexpected return code: %lx", rc);
return -EINVAL;
}
}