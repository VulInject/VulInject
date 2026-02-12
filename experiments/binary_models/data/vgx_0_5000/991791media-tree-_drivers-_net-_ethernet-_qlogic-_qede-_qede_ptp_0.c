static u64 qede_ptp_read_cc(const struct cyclecounter *cc)
{
struct qede_dev *edev;
struct qede_ptp *ptp;
u64 phc_cycles;
int rc;

ptp = container_of(cc, struct qede_ptp, cc);
edev = ptp->edev;
rc = ptp->ops->read_cc(edev->cdev, &phc_cycles);
if (rc)
WARN_ONCE(1, "PHC read err %d\n", rc);

DP_VERBOSE(edev, QED_MSG_DEBUG, "PHC read cycles = %llu\n", phc_cycles);

return phc_cycles;
}