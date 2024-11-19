#pragma once

#include "Event.h"
#include <sstream>
namespace Foxin {

	class FOXIN_API KeyEvent : public Event {

	public:
		inline int GetKeyCode() const { return m_KeyCode; }
		EVENT_CLASS_CATEGORY(EventCategoryKeyboard | EventCategoryInput)

	protected:
		KeyEvent(int keycode) : m_KeyCode(keycode) {}
		int m_KeyCode;

	};

	class FOXIN_API KeyPressedEvent : public KeyEvent {

	public:
		KeyPressedEvent(int keycode, bool isRepeat) : KeyEvent(keycode), m_isRepeat(isRepeat) {}
		inline int GetRepeatCount() const { return m_isRepeat; }

		std::string ToString() const override {
			std::stringstream ss;
			ss << "KeyPressedEvent: " << m_KeyCode << " (repeat: " << m_isRepeat << ")";
			return ss.str();
		}

		EVENT_CLASS_TYPE(KeyPressed)

	private:
		bool m_isRepeat;

	};

	class FOXIN_API KeyReleasedEvent : public KeyEvent {

	public:
		KeyReleasedEvent(int keycode) : KeyEvent(keycode) {}

		std::string ToString() const override {
			std::stringstream ss;
			ss << "KeyReleasedEvent: " << m_KeyCode;
			return ss.str();
		}

		EVENT_CLASS_TYPE(KeyReleased)

	};

}