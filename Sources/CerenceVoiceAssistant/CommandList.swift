import Foundation

struct Command: Hashable, Identifiable {
    var id = UUID()
    var msgId: Int
    var domain: String
    var name: String
    var params: String

    init(data: [AnyHashable: Any]) {
        msgId = data["id"] as? Int ?? NSNotFound
        name = data["name"] as? String ?? ""
        domain = data["domain"] as? String ?? ""
        params = ""
        if let paramsData = data["params"] as? [AnyHashable: Any],
           let serializedData = try? JSONSerialization.data(withJSONObject: paramsData, options: .prettyPrinted) {
            params = String(data: serializedData, encoding: .utf8) ?? ""
        }
    }
}

class CommandList: ObservableObject {
    @Published private(set) var commands: [Command]

    init(commands: [Command]) {
        self.commands = commands
    }

    func add(_ data: [AnyHashable: Any]) {
        DispatchQueue.main.async {
            self.commands.append(Command(data: data))
        }
    }

    func removeAll() {
        DispatchQueue.main.async {
            self.commands.removeAll()
        }
    }
}

struct DialogNotification: Identifiable {
    var id = UUID()
    var name = ""
    var params: [AnyHashable: Any] = [:]

    init(data: [AnyHashable: Any]) {
        self.name = data["name"] as? String ?? ""
        self.params = data["params"] as? [AnyHashable: Any] ?? [:]
    }
}

class NotificationList: ObservableObject {
    @Published private(set) var notifications: [DialogNotification]

    init(notifications: [DialogNotification]) {
        self.notifications = notifications
    }

    func add(_ data: [AnyHashable: Any]) {
        DispatchQueue.main.async {
            self.notifications.append(DialogNotification(data: data))
        }
    }

    func removeAll() {
        DispatchQueue.main.async {
            self.notifications.removeAll()
        }
    }
}
