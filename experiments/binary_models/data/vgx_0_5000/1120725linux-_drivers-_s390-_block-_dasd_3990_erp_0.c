static struct dasd_ccw_req *
dasd_3990_erp_in_erp(struct dasd_ccw_req *cqr)
{

struct dasd_ccw_req *erp_head = cqr,	
*erp_match = NULL;	
int match = 0;		

if (cqr->refers == NULL) {	
return NULL;
}


do {
match = dasd_3990_erp_error_match(erp_head, cqr->refers);
erp_match = cqr;	
cqr = cqr->refers;	

} while ((cqr->refers != NULL) && (!match));

if (!match) {
return NULL;	
}

return erp_match;	

}				