/***************************************************************************************************************
 *
 * Class informer, plugin for Interactive Disassembler (IDA)
 *
 * Rewritten to C++14, modified and optimized GCC RTTI parsing code originally written by:
 * ^ Igor Skochinsky, see http://www.hexblog.com/?p=704 for the original version of this code
 * ^ NCC Group, see https://github.com/nccgroup/PythonClassInformer for the modified version of the code above
 *
 * This code has been written by Michał Wójtowicz a.k.a mwl4, 02/2018
 *
 ***************************************************************************************************************/

#pragma once

class graph_t
{
public:
	void run();

private:
	bool fill_ignored_prefixes();
	void process_ignored_prefixes();
	bool save_to_file(const string filepath);

private:
	array_dyn_t<sstring_t> m_ignored_prefixes;
};

/* eof */
