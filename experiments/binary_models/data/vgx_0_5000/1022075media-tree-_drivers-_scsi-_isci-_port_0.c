enum sci_status sci_port_start_io(struct isci_port *iport,
struct isci_remote_device *idev,
struct isci_request *ireq)
{
enum sci_port_states state;

state = iport->sm.current_state_id;
switch (state) {
case SCI_PORT_SUB_WAITING:
return SCI_FAILURE_INVALID_STATE;
case SCI_PORT_SUB_OPERATIONAL:
iport->started_request_count++;
return SCI_SUCCESS;
default:
dev_warn(sciport_to_dev(iport), "%s: in wrong state: %s\n",
__func__, port_state_name(state));
return SCI_FAILURE_INVALID_STATE;
}
}