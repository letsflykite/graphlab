/*
 * Copyright (c) 2009 Carnegie Mellon University.
 *     All rights reserved.
 *
 *  Licensed under the Apache License, Version 2.0 (the "License");
 *  you may not use this file except in compliance with the License.
 *  You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 *  Unless required by applicable law or agreed to in writing,
 *  software distributed under the License is distributed on an "AS
 *  IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
 *  express or implied.  See the License for the specific language
 *  governing permissions and limitations under the License.
 *
 * For more about this software visit:
 *
 *      http://www.graphlab.ml.cmu.edu
 *
 */


#ifndef GRAPHLAB_DC_COMPILE_PARAMETERS_HPP
#define GRAPHLAB_DC_COMPILE_PARAMETERS_HPP
/**
  \ingroup rpc
  \def RPC_DEFAULT_NUMHANDLERTHREADS
  \brief default number of handler threads to spawn.
 */
#define RPC_DEFAULT_NUMHANDLERTHREADS (size_t)(-1)

/**
  \ingroup rpc
  \def RPC_DEFAULT_COMMTYPE
  \brief default communication method
 */
#define RPC_DEFAULT_COMMTYPE TCP_COMM

/**
  \ingroup rpc
  \def RPC_MAX_N_PROCS
  \brief Maximum number of processes supported
 */
#define RPC_MAX_N_PROCS 128

/**
 * \ingroup rpc
 * \def INITIAL_BUFFER_SIZE
 * Each thread local buffer comprises of #procs buffers, each of this size
 */
#define INITIAL_BUFFER_SIZE 4096

/**
 * \ingroup RPC
 * \def RECEIVE_BUFFER_SIZE
 * The size of the receive buffer for each socket
 */
#define RECEIVE_BUFFER_SIZE 131072

#endif
