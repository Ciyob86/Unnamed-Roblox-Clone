/*
 * Copyright (C) 2018 John M. Harris, Jr. <johnmh@openblox.org>
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

#ifndef OB_INST_SKY
#define OB_INST_SKY

namespace OB{
	namespace Instance{
		class Sky: public Instance{
			public:
				Sky(OBEngine* eng);
				virtual ~Sky();

				virtual void activateSky();
				virtual void deactivateSky();

				/**
				 * This is provided for the convenience of sky implementations.
				 *
				 * If this is true, the sky is active. Useful in hooks from
				 * AssetLocator, where we'll want to wait for assets to load
				 * before applying the sky node.
				 *
				 * @author John M. Harris, Jr.
				 */
				bool skyActive;

				DECLARE_CLASS(Sky);
		};
	}
}

#endif // OB_INST_SKY


// Local Variables:
// mode: c++
// End:
