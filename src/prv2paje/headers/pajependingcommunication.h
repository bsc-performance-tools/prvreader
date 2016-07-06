/*****************************************************************************\
 *                        ANALYSIS PERFORMANCE TOOLS                         *
 *                                 prvreader                                 *
 *      Libraries and Tools for reading and converting Paraver traces        *
 *****************************************************************************
 *     ___     This library is free software; you can redistribute it and/or *
 *    /  __         modify it under the terms of the GNU LGPL as published   *
 *   /  /  _____    by the Free Software Foundation; either version 3        *
 *  /  /  /     \   of the License, or (at your option) any later version.   *
 * (  (  ( B S C )                                                           *
 *  \  \  \_____/   This library is distributed in hope that it will be      *
 *   \  \__         useful but WITHOUT ANY WARRANTY; without even the        *
 *    \___          implied warranty of MERCHANTABILITY or FITNESS FOR A     *
 *                  PARTICULAR PURPOSE. See the GNU LGPL for more details.   *
 *                                                                           *
 * You should have received a copy of the GNU Lesser General Public License  *
 * along with this library; if not, write to the Free Software Foundation,   *
 * Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA          *
 * The GNU LEsser General Public License is contained in the file COPYING.   *
 *                                 ---------                                 *
 *   Barcelona Supercomputing Center - Centro Nacional de Supercomputacion   *
\*****************************************************************************/

#ifndef PAJEPENDINGCOMMUNICATION_H
#define PAJEPENDINGCOMMUNICATION_H


#include <string>
#include "pajependingevent.h"

using namespace std;

namespace prv2paje{

    class PajePendingCommunication: public PajePendingEvent
    {
    public:
        PajePendingCommunication();
        PajePendingCommunication(double timestamp);
        static void InitializeId();
        static string GetNextKey();
        string getKey() const;
        void setKey(const string &value);
        string getSubContainer() const;
        void setSubContainer(const string &value);
        string getValue() const;
        void setValue(string value);
        static int id;

    protected:
        string key;
        string subContainer;
        string value;
    };

}



#endif // PAJEPENDINGCOMMUNICATION_H
