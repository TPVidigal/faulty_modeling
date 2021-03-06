/**
 * @file    main.cpp
 * @brief   Main method of the PID Matlab testbench
 *
 * @author  Tiago Pereira Vidigal
 * @version 1.0
 * 
 * This testbench takes files generated by the Golden Model in Matlab to
 * validate the SystemC PIDs
 * 
 */
/*------------------------------------------------------------------------------
 *
 * History
 *
 * Version  Date        Author       Note
 * 1.0      2016/08/14  TVIDIGAL     Document created.
 *
 *----------------------------------------------------------------------------*/

#include <systemc.h>
#include "tb_PID_Matlab.hpp"


/* Main **********************************************************************/

///Start simulation
int sc_main(int argc, char* argv[]) {

	tb_PID_Matlab tb("Testbench_Matlab");
	
	sc_start();
	return 0;
}
