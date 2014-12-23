//
//  ___FILENAME___
//
//  Created by ___FULLUSERNAME___ on ___DATE___.
//___COPYRIGHT___
//

#pragma once

#include "entityx/System.h"

namespace ___PROJECTNAMEASIDENTIFIER___ {

class ___FILEBASENAMEASIDENTIFIER___ : public entityx::System<___FILEBASENAMEASIDENTIFIER___>, public entityx::Receiver<___FILEBASENAMEASIDENTIFIER___>
{
public:
	void configure( entityx::EventManager &events ) override;

	void update( entityx::EntityManager &entities, entityx::EventManager &events, entityx::TimeDelta dt ) override;

private:

};

} // namespace ___PROJECTNAMEASIDENTIFIER___
