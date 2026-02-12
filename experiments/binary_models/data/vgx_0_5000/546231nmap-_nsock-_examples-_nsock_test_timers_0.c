void timer_handler(nsock_pool nsp, nsock_event nse, void *mydata) {
enum nse_status status = nse_status(nse);
enum nse_type type = nse_type(nse);
int rnd, rnd2;

printf("%ld:timer_handler: Received callback of type %s; status %s; id %li\n", time(NULL), nse_type2str(type), nse_status2str(status), nse_id(nse));

rnd = rand() % num_ids;
rnd2 = rand() % 3;

if (num_ids > (sizeof(ev_ids) / sizeof(nsock_event_id)) - 3) {
printf("\n\nSUCCEEDED DUE TO CREATING ENOUGH EVENTS THAT IT WAS GOING TO OVERFLOW MY BUFFER :)\n\n");
exit(0);
}

if (status == NSE_STATUS_SUCCESS) {
switch (rnd2) {
case 0:


ev_ids[num_ids++] = request_timer(nsp, timer_handler, rand() % 3000, NULL);
ev_ids[num_ids++] = request_timer(nsp, timer_handler, rand() % 3000, NULL);
break;
case 1:

try_cancel_timer(nsp, rnd, rand() % 2);
break;
case 2:

ev_ids[num_ids++] = request_timer(nsp, timer_handler, rand() % 3000, NULL);
break;
default:
assert(0);
}
}
}