/** @file -- Tcg2PreUefiEventLogLib.h
This header file describes the interface that should be published by
instances of the Tcg2PreUefiEventLogLib. This library can be used
to publish TPM EventLog entries for measurements that may have been made prior
to driver initialization.
MS_CHANGE_131467
MSChange [ALL] - Move to TCG2 driver for 256-bit PCRs.

THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF
THE POSSIBILITY OF SUCH DAMAGE.


Copyright (c) Microsoft Corporation. All rights reserved.
SPDX-License-Identifier: BSD-2-Clause-Patent

**/

#ifndef _TCG_2_PRE_UEFI_EVENT_LOG_LIB_H_
#define _TCG_2_PRE_UEFI_EVENT_LOG_LIB_H_

/**
  Create the EventLog entries.
**/
VOID
CreateTcg2PreUefiEventLogEntries (
  VOID
  );

#endif // _TCG_2_PRE_UEFI_EVENT_LOG_LIB_H_