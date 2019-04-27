/*
 * We define a bunch of states the threads can have
 * */
enum STATE = {
	state_not_existent,
	state_not_active,
	state_ready, 
	state_running,
	state_blocked
}

/*
 * We implement the struct for our threads. These are a subset of the
 * thread state of the OS, but if the scheduler is trusted, the whole could also
 * be taken
 * */
struct thread {
	enum STATE = state_not_active,

}
void FCFS(struct thread** thread_list, struct thread* current_thread);

void create_thread();
