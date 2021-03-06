/*
 * Copyright (C) 2017 John M. Harris, Jr. <johnmh@openblox.org>
 *
 * This file is part of OpenBlox.
 *
 * OpenBlox is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Lesser General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * OpenBlox is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU Lesser General Public License for more details.
 *
 * You should have received a copy of the Lesser GNU General Public License
 * along with OpenBlox. If not, see <https://www.gnu.org/licenses/>.
 */

#include "instance/Instance.h"

#ifndef OB_INST_PLAYER
#define OB_INST_PLAYER

namespace OB{
	namespace Instance{
#if HAVE_ENET
		class ServerReplicator;
#endif

		class Player: public Instance{
			public:
				Player(OBEngine* eng);
				virtual ~Player();

#if HAVE_ENET
				void setServerReplicator(shared_ptr<ServerReplicator> sR);
				shared_ptr<ServerReplicator> getServerReplicator();
#endif

				DECLARE_CLASS(Player);

#if HAVE_ENET
				shared_ptr<ServerReplicator> serverReplicator;
#endif
		};
	}
}

#endif // OB_INST_PLAYER


// Local Variables:
// mode: c++
// End:
