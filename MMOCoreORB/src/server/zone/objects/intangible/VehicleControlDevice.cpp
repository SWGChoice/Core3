/*
 *	server/zone/objects/intangible/VehicleControlDevice.cpp generated by engine3 IDL compiler 0.60
 */

#include "VehicleControlDevice.h"

#include "server/zone/objects/intangible/IntangibleObject.h"

#include "server/zone/objects/creature/VehicleObject.h"

#include "server/zone/objects/player/PlayerCreature.h"

#include "server/zone/objects/creature/CreatureObject.h"

#include "server/zone/objects/scene/SceneObject.h"

#include "server/zone/Zone.h"

/*
 *	VehicleControlDeviceStub
 */

VehicleControlDevice::VehicleControlDevice() : ControlDevice(DummyConstructorParameter::instance()) {
	_impl = new VehicleControlDeviceImplementation();
	_impl->_setStub(this);
}

VehicleControlDevice::VehicleControlDevice(DummyConstructorParameter* param) : ControlDevice(param) {
}

VehicleControlDevice::~VehicleControlDevice() {
}


void VehicleControlDevice::storeObject(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 6);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((VehicleControlDeviceImplementation*) _impl)->storeObject(player);
}

void VehicleControlDevice::generateObject(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 7);
		method.addObjectParameter(player);

		method.executeWithVoidReturn();
	} else
		((VehicleControlDeviceImplementation*) _impl)->generateObject(player);
}

int VehicleControlDevice::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 8);
		method.addObjectParameter(player);
		method.addByteParameter(selectedID);

		return method.executeWithSignedIntReturn();
	} else
		return ((VehicleControlDeviceImplementation*) _impl)->handleObjectMenuSelect(player, selectedID);
}

void VehicleControlDevice::destroyObjectFromDatabase(bool destroyContainedObjects) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 9);
		method.addBooleanParameter(destroyContainedObjects);

		method.executeWithVoidReturn();
	} else
		((VehicleControlDeviceImplementation*) _impl)->destroyObjectFromDatabase(destroyContainedObjects);
}

int VehicleControlDevice::canBeDestroyed(PlayerCreature* player) {
	if (_impl == NULL) {
		if (!deployed)
			throw ObjectNotDeployedException(this);

		DistributedMethod method(this, 10);
		method.addObjectParameter(player);

		return method.executeWithSignedIntReturn();
	} else
		return ((VehicleControlDeviceImplementation*) _impl)->canBeDestroyed(player);
}

/*
 *	VehicleControlDeviceImplementation
 */

VehicleControlDeviceImplementation::VehicleControlDeviceImplementation(DummyConstructorParameter* param) : ControlDeviceImplementation(param) {
	_initializeImplementation();
}

VehicleControlDeviceImplementation::~VehicleControlDeviceImplementation() {
}


void VehicleControlDeviceImplementation::finalize() {
}

void VehicleControlDeviceImplementation::_initializeImplementation() {
	_setClassHelper(VehicleControlDeviceHelper::instance());

	_serializationHelperMethod();
}

void VehicleControlDeviceImplementation::_setStub(DistributedObjectStub* stub) {
	_this = (VehicleControlDevice*) stub;
	ControlDeviceImplementation::_setStub(stub);
}

DistributedObjectStub* VehicleControlDeviceImplementation::_getStub() {
	return _this;
}

VehicleControlDeviceImplementation::operator const VehicleControlDevice*() {
	return _this;
}

void VehicleControlDeviceImplementation::lock(bool doLock) {
	_this->lock(doLock);
}

void VehicleControlDeviceImplementation::lock(ManagedObject* obj) {
	_this->lock(obj);
}

void VehicleControlDeviceImplementation::rlock(bool doLock) {
	_this->rlock(doLock);
}

void VehicleControlDeviceImplementation::wlock(bool doLock) {
	_this->wlock(doLock);
}

void VehicleControlDeviceImplementation::wlock(ManagedObject* obj) {
	_this->wlock(obj);
}

void VehicleControlDeviceImplementation::unlock(bool doLock) {
	_this->unlock(doLock);
}

void VehicleControlDeviceImplementation::runlock(bool doLock) {
	_this->runlock(doLock);
}

void VehicleControlDeviceImplementation::_serializationHelperMethod() {
	ControlDeviceImplementation::_serializationHelperMethod();

	_setClassName("VehicleControlDevice");

}

VehicleControlDeviceImplementation::VehicleControlDeviceImplementation() {
	_initializeImplementation();
	// server/zone/objects/intangible/VehicleControlDevice.idl(60):  		Logger.setLoggingName("VehicleControlDevice");
	Logger::setLoggingName("VehicleControlDevice");
	// server/zone/objects/intangible/VehicleControlDevice.idl(61):  		Logger.setLogging(false);
	Logger::setLogging(false);
	// server/zone/objects/intangible/VehicleControlDevice.idl(62):  		Logger.setGlobalLogging(true);
	Logger::setGlobalLogging(true);
}

void VehicleControlDeviceImplementation::generateObject(PlayerCreature* player) {
	// server/zone/objects/intangible/VehicleControlDevice.idl(68):  		if 
	if (player->getParent() != NULL)	// server/zone/objects/intangible/VehicleControlDevice.idl(69):  			return;
	return;
	// server/zone/objects/intangible/VehicleControlDevice.idl(71):  		ZoneServer 
	if (ControlDeviceImplementation::controlledObject->isInQuadTree())	// server/zone/objects/intangible/VehicleControlDevice.idl(72):  			return;
	return;
	// server/zone/objects/intangible/VehicleControlDevice.idl(74):  zoneServer = getZoneServer();
	ZoneServer* zoneServer = getZoneServer();
	// server/zone/objects/intangible/VehicleControlDevice.idl(76):  		super.controlledObject.initializePosition(player.getPositionX(), player.getPositionZ(), player.getPositionY());
	ControlDeviceImplementation::controlledObject->initializePosition(player->getPositionX(), player->getPositionZ(), player->getPositionY());
	// server/zone/objects/intangible/VehicleControlDevice.idl(77):  		super.controlledObject.setCreatureLink(player);
	ControlDeviceImplementation::controlledObject->setCreatureLink(player);
	// server/zone/objects/intangible/VehicleControlDevice.idl(78):  		super.controlledObject.setControlDevice(this);
	ControlDeviceImplementation::controlledObject->setControlDevice(_this);
	// server/zone/objects/intangible/VehicleControlDevice.idl(80):  		super.controlledObject.insertToZone(player.getZone());
	ControlDeviceImplementation::controlledObject->insertToZone(player->getZone());
	// server/zone/objects/intangible/VehicleControlDevice.idl(82):  		super.updateStatus(1);
	ControlDeviceImplementation::updateStatus(1);
}

int VehicleControlDeviceImplementation::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	// server/zone/objects/intangible/VehicleControlDevice.idl(88):  		Logger.info("selected call", true);
	Logger::info("selected call", true);
	// server/zone/objects/intangible/VehicleControlDevice.idl(90):  
	if (selectedID == RadialOptions::VEHICLE_GENERATE){
	// server/zone/objects/intangible/VehicleControlDevice.idl(92):  
	if (ControlDeviceImplementation::controlledObject == NULL){
	// server/zone/objects/intangible/VehicleControlDevice.idl(93):  				Logger.error("null controlled object in vehicle control device");
	Logger::error("null controlled object in vehicle control device");
	// server/zone/objects/intangible/VehicleControlDevice.idl(94):  				return 1;
	return 1;
}

	else {
	// server/zone/objects/intangible/VehicleControlDevice.idl(96):  				this.generateObject(player);
	_this->generateObject(player);
}
}

	else 	// server/zone/objects/intangible/VehicleControlDevice.idl(98):  		return 
	if (selectedID == RadialOptions::VEHICLE_STORE){
	// server/zone/objects/intangible/VehicleControlDevice.idl(99):  
	if (ControlDeviceImplementation::controlledObject == NULL){
	// server/zone/objects/intangible/VehicleControlDevice.idl(100):  				Logger.error("null controlled object in vehicle control device");
	Logger::error("null controlled object in vehicle control device");
	// server/zone/objects/intangible/VehicleControlDevice.idl(101):  				return 1;
	return 1;
}

	else {
	// server/zone/objects/intangible/VehicleControlDevice.idl(103):  
	if (ControlDeviceImplementation::status == 1 && !ControlDeviceImplementation::controlledObject->isInQuadTree()){
	// server/zone/objects/intangible/VehicleControlDevice.idl(104):  					this.generateObject(player);
	_this->generateObject(player);
}

	else {
	// server/zone/objects/intangible/VehicleControlDevice.idl(106):  					this.storeObject(player);
	_this->storeObject(player);
}
}
}
	// server/zone/objects/intangible/VehicleControlDevice.idl(111):  0;
	return 0;
}

/*
 *	VehicleControlDeviceAdapter
 */

VehicleControlDeviceAdapter::VehicleControlDeviceAdapter(VehicleControlDeviceImplementation* obj) : ControlDeviceAdapter(obj) {
}

Packet* VehicleControlDeviceAdapter::invokeMethod(uint32 methid, DistributedMethod* inv) {
	Packet* resp = new MethodReturnMessage(0);

	switch (methid) {
	case 6:
		storeObject((PlayerCreature*) inv->getObjectParameter());
		break;
	case 7:
		generateObject((PlayerCreature*) inv->getObjectParameter());
		break;
	case 8:
		resp->insertSignedInt(handleObjectMenuSelect((PlayerCreature*) inv->getObjectParameter(), inv->getByteParameter()));
		break;
	case 9:
		destroyObjectFromDatabase(inv->getBooleanParameter());
		break;
	case 10:
		resp->insertSignedInt(canBeDestroyed((PlayerCreature*) inv->getObjectParameter()));
		break;
	default:
		return NULL;
	}

	return resp;
}

void VehicleControlDeviceAdapter::storeObject(PlayerCreature* player) {
	((VehicleControlDeviceImplementation*) impl)->storeObject(player);
}

void VehicleControlDeviceAdapter::generateObject(PlayerCreature* player) {
	((VehicleControlDeviceImplementation*) impl)->generateObject(player);
}

int VehicleControlDeviceAdapter::handleObjectMenuSelect(PlayerCreature* player, byte selectedID) {
	return ((VehicleControlDeviceImplementation*) impl)->handleObjectMenuSelect(player, selectedID);
}

void VehicleControlDeviceAdapter::destroyObjectFromDatabase(bool destroyContainedObjects) {
	((VehicleControlDeviceImplementation*) impl)->destroyObjectFromDatabase(destroyContainedObjects);
}

int VehicleControlDeviceAdapter::canBeDestroyed(PlayerCreature* player) {
	return ((VehicleControlDeviceImplementation*) impl)->canBeDestroyed(player);
}

/*
 *	VehicleControlDeviceHelper
 */

VehicleControlDeviceHelper* VehicleControlDeviceHelper::staticInitializer = VehicleControlDeviceHelper::instance();

VehicleControlDeviceHelper::VehicleControlDeviceHelper() {
	className = "VehicleControlDevice";

	DistributedObjectBroker::instance()->registerClass(className, this);
}

void VehicleControlDeviceHelper::finalizeHelper() {
	VehicleControlDeviceHelper::finalize();
}

DistributedObject* VehicleControlDeviceHelper::instantiateObject() {
	return new VehicleControlDevice(DummyConstructorParameter::instance());
}

DistributedObjectServant* VehicleControlDeviceHelper::instantiateServant() {
	return new VehicleControlDeviceImplementation(DummyConstructorParameter::instance());
}

DistributedObjectAdapter* VehicleControlDeviceHelper::createAdapter(DistributedObjectStub* obj) {
	DistributedObjectAdapter* adapter = new VehicleControlDeviceAdapter((VehicleControlDeviceImplementation*) obj->_getImplementation());

	obj->_setClassName(className);
	obj->_setClassHelper(this);

	adapter->setStub(obj);

	return adapter;
}

